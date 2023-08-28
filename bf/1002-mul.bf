++++[>++++[>+++<-]<-]   Writing 48 / 0x30 / '0' in cell(2)
    ,>,>                    This reads two numbers in cell(0) and cell(1)
    [<-<->>-]               This decrements cell(0) and cell(1) by 48 / 0x30 / '0'
    <<                      go to cell(0)
    [                       The mulitplication loop
        >                   go to cell(1)
        [>+>+<<-]           This moves cell(1) to cell(2) and cell(3)
        >>                  go to cell(3)
        [<<+>>-]            This moves cell(3) back to cell(1)
        <<<-                This decrements cell(0)
    ]
    >[-]<                   This sets cell(1) to 0 so that it can be used as a counter (we are in cell 0 here)
    ++++[>++++[>+++<-]<-]   This adds 48 / 0x30 / '0' to cell(2) cell 2 has the result
    >>.                     This prints the result (go to cell 2 and print)
