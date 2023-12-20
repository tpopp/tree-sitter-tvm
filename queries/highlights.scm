(comment) @comment
(parameter (value) @variable.parameter)
(string_literal) @string
(literal) @constant.builtin
(constant_table_value) @constant
(type) @type
(dtype) @type
(symbol) @function
(global_function_definition (parameter_list (parameter (value) @variable.parameter)))
(value) @variable.builtin
(argument (attribute ( suffix_id) @attribute))
(parameter_list (attribute ( suffix_id) @attribute))
(fn_call (identifier) @function)
["def" "fn"] @keyword
