
# QA Issue Register

## Issue 1: Incorrect LED Pin Configuration

**Category:** Configuration  
**Severity:** Medium, if the selected pin prevents LED output

**Potential cause:** The program uses a pin that does not
match the target board or circuit.

**Investigation:** Check the board documentation, pin
definition, and LED wiring.

**Resolution:** Use the correct built-in LED constant or
the verified external LED pin.

**Verification:** Compile, upload, and observe LED output.

## Issue 2: Missing Current-Limiting Resistor in Circuit Documentation

**Category:** Hardware documentation  
**Severity:** High if an external LED is connected without
appropriate current limiting.

**Potential cause:** The external LED wiring instructions
omit a current-limiting resistor.

**Resolution:** Correct the wiring diagram and specify an
appropriate resistor.

**Verification:** Inspect the updated diagram and circuit.

## Issue 3: Incorrect Blink Timing

**Category:** Functional testing  
**Potential cause:** Incorrect delay values or timing logic.

**Investigation:** Inspect the timing constants and measure
the ON and OFF intervals.

**Resolution:** Set the intended delay values and verify them.

**Verification:** Record the observed timing.

## Issue 4: LED Does Not Blink

**Category:** Functional testing  
**Potential causes:** Incorrect board selection, failed upload,
wrong wiring, power problems, or incorrect pin selection.

**Investigation:** Check compilation and upload messages,
board settings, wiring, and power.

**Resolution:** Correct the actual fault identified.

**Verification:** Repeat the upload and LED observation test.

## Issue 5: Poor Code Readability

**Category:** Maintainability  
**Potential cause:** Unclear values, missing comments,
or inconsistent naming.

**Resolution:** Use named constants and explanatory comments.

**Verification:** Review the source code and compile it again.

## Status

Update each entry to reflect the actual GitHub Issue number,
investigation, fix commit, test evidence, and final status.
