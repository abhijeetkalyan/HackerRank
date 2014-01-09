let a = read_int();;

let pascal n =
 let rec pascal' x acc = if (x = n) then [] else acc :: pascal' (x+1) (List.map2 (+) (0::acc) (acc@[0]))
in pascal' 0 [1];;

let rec pretty_print l = match l with
| [] -> Printf.printf "\n"
| h::t -> Printf.printf "%d " h; pretty_print t;
and pretty_print2 l' = match l' with
| [] -> ();
| h::t -> pretty_print h; pretty_print2 t ;;


pretty_print2 (pascal a)

