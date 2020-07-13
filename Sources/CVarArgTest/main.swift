import Foundation
import CLib

// The literal String is perfectly bridged to the CChar pointer expected by the function
test_str_print("Hello, World!")

// Prints the integers as expected
let argsInt: [CVarArg] = [123, 456, 789]
withVaList(argsInt) { listPtr in
    test_va_arg_int(Int32(argsInt.count), listPtr)
}

// ERROR: Thread 1: EXC_BAD_ACCESS (code=EXC_I386_GPFLT)
let argsStr: [CVarArg] = ["Test", "Testing", "The test"]
withVaList(argsStr) { listPtr in
    test_va_arg_str(Int32(argsStr.count), listPtr)
}
