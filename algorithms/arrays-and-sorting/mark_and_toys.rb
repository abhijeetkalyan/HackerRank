n, k = gets.split(/\s/).map(&:to_i)
prices = gets.split.map(/\s/).map(&:to_i).sort
count = 0

prices.each do |i|
	if ((k - i) >= 0)
		k = k - i
		count += 1
	else 
		puts count
		break
	end		
end
