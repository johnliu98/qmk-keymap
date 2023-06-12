# qmk-keymap

Welcome to my keymap configuration for the Corne LP keyboard! :wave:

Normally, the Corne LP keyboard has a 3x6\_3 split layout, but I ordered one with a 3x5\_3 split layout (for some reason) with a total of 36 keys. It has been a challenge to move from a completely vanilla laptop keyboard with 80 total keys, but let me show you the result!

For instructions on how to use this my custom keymap, please refer to the [QMK Firmware Documentation](https://docs.qmk.fm/#/newbs_building_firmware_workflow?id=review-workflow-output).

## Keymap
The keymap consists of the following layers:

0. QWERTY
1. Numbers and arrows
2. Symbols
3. Mouse

The keymap was designed in such a way that it should be easy to learn, relative to other 36-key layouts, coming from a normal laptop keyboard. The design was based on the article [Designing a 36-key custom keyboard layout](https://peterxjang.com/blog/designing-a-36-key-custom-keyboard-layout.html), but modified to better align with a Swedish keyboard.

I also have a personal rule that each character should be accessible with at most two key presses.

## Visualization

```
0. QWERTY
,------.------.------.------.------.                       ,------.------.------.------.------.
|   Q  |   W  |   E  |   R  |   T  |                       |   Y  |   U  |   I  |   O  |   P  |
|------+------+------+------+------|                       |------+------+------+------+------|
|   A  |   S  |   D  |   F  |   G  |                       |   H  |   J  |   K  |   L  | ' *  |
|------+------+------+------+------|                       |------+------+------+------+------|
| Shift| Ctrl | Alt  | Win  |      |                       |      | Win  | Alt  | Ctrl | Shift|
|   Z  |   X  |   C  |   V  |   B  |                       |   N  |   M  | , ;  | . :  | - _  |
`------'------'------+------+------+------.         ,------+------+------+------'------'------'
                     |      | Sym  | Shift|         |      | Num  |      |
                     |  Tab | Bksp | Esc  |         | Enter| Space| Win  |
                     `------'------'------'         `------'------'------'

1. Numbers and arrows
,------.------.------.------.------.                       ,------.------.------.------.------.
|  1   |  2   |  3   |  4   |  5   |                       |  6   |  7   |  8   |  9   |  0   |
|------+------+------+------+------|                       |------+------+------+------+------|
|      | Mute | Vol- | Vol+ |RgbTog|                       |  ←   |  ↓   |  ↑   |  →   |      |
|------+------+------+------+------|                       +------+------+------+------+------|
|      |      | Br-  | Br+  |RgbMod|                       |      |  Ö   |  Ä   |  Å   |      |
`------'------'------+------+------+------.         ,------+------+------+------'------'------'
                     |      |      |      |         |      |(hold)|      |
                     `------'------'------'         `------'------'------'

2. Symbols
,------.------.------.------.------.                       ,------.------.------.------.------.
|  !   |  "   |  #   |  $   |  %   |                       |  &   |  /   |  (   |  )   |  =   |
|------+------+------+------+------|                       |------+------+------+------+------|
|  |   |  @   |  <   |  >   |      |                       |  \   |  {   |  [   |  ]   |  }   |
|------+------+------+------+------|                       |------+------+------+------+------|
|      |      |      |      |      |                       |  ~   |  +   |  ?   |  ^   |  `   |
`-------------+------+------+------+------.         ,------+------+------+------+-------------'
                     |      |(hold)|      |         |      |      |      |
                     `------'------'------'         `------'------'------'

3. Mouse
,------.------.------.------.------.                       ,------.------.------.------.------.
|      |      |  M↑  |      |      |                       | WH←  | WH↑  | WH↓  | WH→  |      |
|------+------+------+------+------|                       |------+------+------+------+------|
| BTN4 |  M←  |  M↓  |  M→  |      |                       |      | BTN1 | BTN2 | BTN3 | BTN5 |
|------+------+------+------+------|                       |------+------+------+------+------|
|      |      |      |      |      |                       |      | ACC0 | ACC1 | ACC2 |      |
`-------------+------+------+------+------.         ,------+------+------+------+-------------'
                     |      |(hold)|      |         |      |(hold)|      |
                     `------'------'------'         `------'------'------'
```
