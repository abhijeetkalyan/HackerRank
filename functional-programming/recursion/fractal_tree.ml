(*let rec print a n = match a with
| 0 -> Printf.printf "_ "
| x -> if (x = (n/2)) then (Printf.printf "1 "; print (a-1) n) else (Printf.printf "_ "; print (a-1) n);; *)
(*
let rec print_y length = match length with
| 0 -> Printf.printf "_\n"
| x -> Printf.printf "_"; print_y (length - 1)
and print_y' size = match size with
| 0 -> ();
| x -> print_y 50; print_y' (size - 1) *)
(*
let rec print_y start end pos size length = match pos, size, length with
| a, b,  0 -> if ((a = start) || (a = end)) then Printf.printf "1"; print_y (start+1) (end-1) (pos-1) (size-1) (length-1) 
			  else Printf.printf "_"; print_y (start+1) (end-1) (pos-1) (size-1) (length-1) *)
(*
let rec print_y start end pos size length = match pos,size, length with
| _, _, 0 -> Printf.printf "_\n"
| a, 0, x -> if (pos = length/2) then Printf.printf "1" else Printf.printf "_"; print_y start end (pos) *)

let rec print_size size = match size with
| 0 -> ();
| y -> print_straight 5 10; print_size (size - 1)
and print_straight mid length = match length with
| 0 -> Printf.printf "_\n"
| x -> if (x = mid) then (Printf.printf "1"; print_straight mid (length -1)) else (Printf.printf "_"; print_straight mid (length -1))
