#!/bin/sh
#!/bin/bash
install_name_tool -id "@executable_path/../Frameworks/Breakpad.framework/Resources/breakpadUtilities.dylib" "${BUILT_PRODUCTS_DIR}/breakpadUtilities.dylib"

