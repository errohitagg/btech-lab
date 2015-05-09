library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity code_converter is
    Port ( a : in std_logic_vector(3 downto 0);
           y : out std_logic_vector(3 downto 0));
end code_converter;

architecture Behavioral of code_converter is

begin

	with a select
	y <= "0011" when "0000",
		"0100" when "0001",
		"0101" when "0010",
		"0110" when "0011",
		"0111" when "0100",
		"1000" when "0101",
		"1001" when "0110",
		"1010" when "0111",
		"1011" when "1000",
		"1100" when "1001",
		"XXXX" when others;

end Behavioral;
