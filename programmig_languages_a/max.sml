fun max(xs : int list) =
	if null xs
	then 0
	else if null (tl xs)
	then hd xs
	else 
		let
			val max_element = max(tl xs)
		in
			if max_element > hd xs
			then max_element
			else hd xs
		end
