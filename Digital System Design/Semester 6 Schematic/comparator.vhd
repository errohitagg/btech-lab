library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity comparator is
    Port ( a : in std_logic;
           b : in std_logic;
           less : out std_logic;
           greater : out std_logic;
           equal : out std_logic);
end comparator;

architecture Behavioral of comparator is

begin

	process(a,b)
	begin
		if(a<b)
			then less<='1';
			equal<='0';
			greater<='0'; 
		elsif(a=b)
			then less<='0';
			equal<='1';
			greater<='0';
		else
			less<='0';
			equal<='0';
			greater<='1';
		end if;
	end process;

end Behavioral;
