(*The series expansion of ex is given by:

1 + x + x2/2! + x3/3! + x4/4! + …….

Evaluate e^x for given values of x, by using the above expansion for the first 10 terms.*)

 let rec series n acc = match acc with
 | 0.0 -> 1.0
 | x -> ((n**acc)/. (factorial acc) ) +. series n (acc -. 1.0)
 and factorial n = match n with 
 |0.0 -> 1.0 
 |x -> n *. factorial (n -. 1.0);;

 try
 while true do
  let line = float_of_string (input_line stdin) in
   Printf.printf "%0.*f\n" 4 (series line 9.0)
 done;
 None
with
 End_of_file -> None
;;	

