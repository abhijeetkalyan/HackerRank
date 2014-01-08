let n = read_int ();;
let rec nhello x = match x with
| 0 -> []
| _ -> print_int x; [x];;
nhello n