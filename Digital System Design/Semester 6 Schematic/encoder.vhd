library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity encoder is
    Port ( a : in std_logic_vector(7 downto 0);
           z : out std_logic_vector(2 downto 0));
end encoder;

architecture Behavioral of encoder is

begin

	process(a)
	begin
		case a is
			when "00000001"=> z<="000";	
			when "00000010"=> z<="001";
			when "00000100"=> z<="010";
			when "00001000"=> z<="011";
			when "00010000"=> z<="100";
			when "00100000"=> z<="101";
			when "01000000"=> z<="110";
			when "10000000"=> z<="111";		 
			when others=> z<="XXX";
		end case;
	end process;

end Behavioral;
