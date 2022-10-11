fun max(xs : int list) =
	if null xs
	then NONE
	else
		let
			val max_element_option = max(tl(xs))
		in 
			if isSome(max_element_option) andalso valOf(max_element_option) > hd xs
			then max_element_option
			else SOME (hd xs)
		end
