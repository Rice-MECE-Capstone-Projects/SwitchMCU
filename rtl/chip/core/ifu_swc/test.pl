use strict;
use warnings;
use Verilog::SigParser;

# Custom class to handle the parser callbacks
package MyParser;
use base qw(Verilog::SigParser);

sub var {
    my ($self, $kwd, $name, $objof, $nettype, $data_type, $array, $value) = @_;
    print "Variable info:\n";
    print "Keyword: $kwd\n";
    print "Name: $name\n";
    print "Object of: $objof\n";
    print "Nettype: $nettype\n";
    print "Data Type: $data_type\n";
    print "Array: $array\n";
    print "Value: $value\n";
    print "----------------------\n";
}

package main;

my $filename = 'ifu_swc.v';
my $parser = MyParser->new();

# Parse the Verilog file
$parser->parse_file($filename);

