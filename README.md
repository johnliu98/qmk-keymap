# qmk-keymap

Welcome to my keymap configuration for the Corne LP keyboard! :wave:

Normally, the Corne LP keyboard has a 3x6\_3 split layout, but I ordered one with a 3x5\_3 split layout (for some reason) with a total of 36 keys. It has been a challenge to move from a completely vanilla laptop keyboard with 80 total keys, but let me show you the result!

For instructions on how to use this my custom keymap, please refer to the [QMK Firmware Documentation](https://docs.qmk.fm/#/newbs_building_firmware_workflow?id=review-workflow-output).

## Keymap
The keymap consists of three primary layers

0. QWERTY
1. Numbers and symbols
2. Function, audio, brightness and movement

and an additional layer

3. Custom

that is free to be further customized.

The keymap was designed in such a way that it should be easy, relative to other 36-key layouts, to switch between this layout and a normal laptop layout. It was based on the article [Designing a 36-key custom keyboard layout](https://peterxjang.com/blog/designing-a-36-key-custom-keyboard-layout.html), but modified to better align with a Swedish laptop layout while still following the guidelines in the article.

## Visualization

```
0. QWERTY
  ,-------.-------.-------.-------.-------.     ,-------.-------.-------.-------.-------.
  | Q     | W     | E     | R     | T     |     | Y     | U     | I     | O     | P     |
  |-------+-------+-------+-------+-------|     |-------+-------+-------+-------+-------|
  | A     | S     | D     | F     | G     |     | H     | J     | K     | L     | '*    |
  |-------+-------+-------+-------+-------|     |-------+-------+-------+-------+-------|
  | SFT/Z | X     | C     | V     | B     |     | N     | M     | ,;    | .:    | SFT/-_|
  `-------'-------'-------'-------'-------'     `-------'-------'-------'-------'-------'

                  ,-------.-------.-------.     ,-------.-------.-------.
                  | WIN   |L1/ESC |CTR/TAB|     |ALT/ENT|L2/SPC | BSP   |
                  `-------'-------'-------'     `-------'-------'-------'

1. Numbers and symbols
  ,-------.-------.-------.-------.-------.     ,-------.-------.-------.-------.-------.
  | 1!    | 2"    | 3#    | 4¤    | 5%    |     | 6&    | 7/    | 8(    | 9)    | 0=    |
  |-------+-------+-------+-------+-------|     |-------+-------+-------+-------+-------|
  | |     | @     | ~     | $     | ^     |     | +     | {     | [     | ]     | }     |
  |-------+-------+-------+-------+-------|     |-------+-------+-------+-------+-------|
  | SFT   | <     | >     | \     |       |     | ?     | Ö     | Ä     | Å     | SFT/` |
  `-------'-------'-------'-------'-------'     `-------'-------'-------'-------'-------'

                  ,-------.-------.-------.     ,-------.-------.-------.
                  |       |(hold) |       |     |       |L3/SPC |       |
                  `-------'-------'-------'     `-------'-------'-------'

2. Function, audio, brightness and movement
  ,-------.-------.-------.-------.-------.     ,-------.-------.-------.-------.-------.
  | F1    | F2    | F3    | F4    | F5    |     | F6    | F7    | F8    | F9    | F10   |
  |-------+-------+-------+-------+-------|     |-------+-------+-------+-------+-------|
  | F11   | F12   | Vol-  |  Vol+ | MUTE  |     | LEFT  | DOWN  | UP    | RIGHT |       |
  |-------+-------+-------+-------+-------|     |-------+-------+-------+-------+-------|
  |       |       | Br-   | Br+   |       |     |       |       |       |       |       |
  `-------'-------'-------'-------'-------'     `-------'-------'-------'-------'-------'

                  ,-------.-------.-------.     ,-------.-------.-------.
                  |       |L3/ESC |       |     |       |(hold) |       |
                  `-------'-------'-------'     `-------'-------'-------'

3. Custom
  ,-------.-------.-------.-------.-------.     ,-------.-------.-------.-------.-------.
  |       |       |       |       |       |     |       |       |       |       |       |
  |-------+-------+-------+-------+-------|     |-------+-------+-------+-------+-------|
  |       |       |       |       |       |     |       |       |       |       |       |
  |-------+-------+-------+-------+-------|     |-------+-------+-------+-------+-------|
  |       |       |       |       |       |     |       |       |       |       |       |
  `-------'-------'-------'-------'-------'     `-------'-------'-------'-------'-------'

                  ,-------.-------.-------.     ,-------.-------.-------.
                  |       |(hold) |       |     |       |(hold) |       |
                  `-------'-------'-------'     `-------'-------'-------'
```
