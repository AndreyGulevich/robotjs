var robot = require('..');

describe('Toggle by physical key', function () {
  it('ignores unsupported physical codes without injecting an event', function () {
    expect(robot.keyTogglePhysical('Unidentified', 'down')).toBe(false);
    expect(robot.keyTogglePhysical('F25', 'up')).toBe(false);
    expect(robot.keyTogglePhysical('KeyA\u0000', 'down')).toBe(false);
  });

  it('rejects invalid input before sending a native event', function () {
    expect(function () {
      robot.keyTogglePhysical('KeyA', 'invalid');
    }).toThrowError(TypeError, /key state/);
    expect(function () {
      robot.keyTogglePhysical('KeyA', 'down', ['invalid-modifier']);
    }).toThrowError(TypeError, /modifier/);
  });

  if (process.env.ROBOTJS_TEST_X11 === '1') {
    it('toggles the A position with a non-Latin XKB layout', function () {
      expect(robot.keyTogglePhysical('KeyA', 'down')).toBe(true);
      expect(robot.keyTogglePhysical('KeyA', 'up')).toBe(true);
    });
  }
});
