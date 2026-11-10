var robot = require('..');

if (process.platform === 'win32' || process.platform === 'darwin') {
  describe('Toggle by native key code', function () {
    var invalidCodes = [-1, 1.5, Infinity, NaN, process.platform === 'darwin' ? 128 : 255];

    invalidCodes.forEach(function (code) {
      it('rejects invalid code ' + code, function () {
        expect(function () {
          robot.keyToggleByCode(code, true);
        }).toThrowError(RangeError);
      });
    });

    it('requires a boolean key state', function () {
      expect(function () {
        robot.keyToggleByCode(65, 'down');
      }).toThrowError(TypeError);
    });

    it('validates modifiers after accepting the platform code for A', function () {
      var code = process.platform === 'darwin' ? 0 : 65;
      expect(function () {
        robot.keyToggleByCode(code, true, ['invalid-modifier']);
      }).toThrowError(TypeError, /modifier/);
    });
  });
}
