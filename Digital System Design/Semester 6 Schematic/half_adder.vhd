library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity half_adder is
    Port ( a : in std_logic;
           b : in std_logic;
           s : out std_logic;
           c : out std_logic);
end half_adder;

architecture Behavioral of half_adder is

begin
	s<= a xor b;
	c<= a and b;

end Behavioral;
