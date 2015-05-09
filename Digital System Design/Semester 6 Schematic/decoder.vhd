library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity decoder is
    Port ( a : in std_logic_vector(2 downto 0);
           z : out std_logic_vector(7 downto 0));
end decoder;

architecture Behavioral of decoder is

begin
	
	process(a)
	begin
		case a is
			when "000"=> z<="00000001";	
			when "001"=> z<="00000010";
			when "010"=> z<="00000100";
			when "011"=> z<="00001000";
			when "100"=> z<="00010000";
			when "101"=> z<="00100000";
			when "110"=> z<="01000000";
			when "111"=> z<="10000000";		 
			when others=> z<="XXXXXXXX";
		end case;
	end process;

end Behavioral;
