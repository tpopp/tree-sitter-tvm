(global_function_definition
    (symbol) @name) @definition.function
(assign (value) @name (local_function_definition)) @definition.function
(fn_call (identifier) @name) @reference.call
(fn_call (symbol) @name) @reference.call
(fn_call (value) @name) @reference.call
