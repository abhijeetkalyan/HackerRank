t = gets.to_i

t.times do
	n, k = gets.split(/\s/).map(&:to_i)
	arrA = gets.split(/\s/).map(&:to_i).sort
	arrB = gets.split(/\s/).map(&:to_i).sort.reverse
	valid = false
	n.times do |i|
		if (arrA[i] + arrB[i] >= k)
			valid = true
		else 
			valid = false
			puts "NO"
			break
		end
	end
	if (valid)
		puts "YES"
	end				
end