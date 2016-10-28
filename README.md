# SRA-Tests-Files
The SRA tool has been tested against two similar resource analysis tools. The source of the examples used for these tests is available here.

There are very few tools targeting resource analysis in programs that allows concurrency
and the presence of negative costs, like for example, an explicit release operation. In order to asses the
quality of our tool we compare with Costa (http://costa.ls.fi.upm.es/~costa/costa/costa.php) the only (to the best of our knowledge) other tool capable to face problems within the same settings. We also compare with C4B (http://www.cs.yale.edu/homes/qcar/aaa/), a tool based on amortized analysis. Even though the latter targets only sequential programs we consider it is the state-of-the-art of certified tools for
the automatic static analysis of resource usage bounds.

Some remarks on the tool comparison:
– The three tools targets three different programs: C4B targets C, Costa targets ABS and SRA targets vml. Therefore
in order to compare the three tools each test program has been rewritten according to the tool language. The
link to all the examples used in the comparison is available here.
– Each tool uses different metrics for quantitative analysis. SRA quantifies the resource usage by means of the
operations new VM() and release, while C4B has two metrics: the (i) back-edge metrics that assigns a cost of
1 to every back edge in the control-flow graph, thus not allowing negative costs, and (ii) the tick metric that uses
a special operation tick(n) that has a cost of n where n can be either a positive or negative number. Costa, on
the other hand, considers both of these kinds of metrics and, in addition, it also support others that are specific
to the domain of the targeted language.
– Both Costa and SRA can differentiate between peak costs and net costs, however this distinction is not made in
C4B, therefore we restrict the results in the following table only to the net costs of the corresponding programs.
