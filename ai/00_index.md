# Artificial Intelligence

## Turing Test

The **Turing Test**, proposed by Alan Turing (1950), was designed to provide a satisfactory operational definition of intelligence. A computer passes the test if a human interrogator, after
posing some written questions, cannot tell whether the written responses come from a person or from a computer. The computer would need to possess the following capabilities:

* **natural language processing** to enable it to communicate successfully in English;
* **knowledge representation** to store what it knows or hears;
* **automated reasoning** to use the stored information to answer questions and to draw
new conclusions;
* **machine learning** to adapt to new circumstances and to detect and extrapolate patterns.

To pass the total Turing Test, the computer will need:
* **COMPUTER VISION** - to perceive objects;
* **ROBOTICS** - to manipulate objects and move about.

Newer alternative to the Turing Test is called **Winograd Schemas**. An excellent explanation of the Winograd Schemas [can be found here](http://www.newyorker.com/tech/elements/why-cant-my-computer-understand-me). Long story short, it furthers the idea of what questions should we ask computers. An example:

>  Joe's uncle can still beat him at tennis, even though he is 30 years [older/younger]. Who is [older/younger]?

The rest of the proposed questions can be found [here](http://www.cs.nyu.edu/davise/papers/WS.html).

## Working of Human Minds

There are three ways to get _inside_ the actual workings of human minds:
1. Introspection - trying to catch our own thoughts as they go by;
2. Psychological experiments - observing a person in action;
3. Brain imaging - observing the brain in action.

Once we have a sufficiently precise theory of
the mind, it becomes possible to express the theory as a computer program.

## The Rational Agent Approach


For each possible percept sequence, a rational agent should select an action that is expected to maximize its performance measure, given the evidence provided by the percept sequence and whatever built-in knowledge the agent has.

**Rational Agent** is an agent that perceives environment and acts upon what he perceives. The goal is to make a rational agent more intelligent. To do that, we need a good **agent program** that will combine sensors with actions.

In general, an agent’s choice of action at any given instant can depend on the entire percept sequence observed to date, but not on anything it hasn’t perceived.

Computer agents are expected to do more than a usual computer program:
* operate autonomously,
* perceive their environment,
* persist over a prolonged time period,
* adapt to change, and
* **create and pursue goals**.

> If the organism carries a “small-scale model” of external reality and of its own possible actions within its head, it is able to try out various alternatives, conclude which is the best of them, react to future situations before they arise, utilize the knowledge of past events in dealing with the present and future, and in every way to react in a much fuller, safer, and more competent manner to the emergencies which face it.
>
> **(Craik, 1943)**

## History

The early years of AI were full of successes - in a limited way. The intellectual establishment, by and large, preferred to believe that _"a machine can never do X."_ AI researchers naturally responded by demonstrating one X after another. John McCarthy referred to this period as the _"Look, Ma, no hands!"_ era.

In 1958, **McCarthy** published a paper entitled **_Programs with Common Sense_**, in which he describes _Advice Taker_, a hypothetical program that can be seen as the first complete AI system. It is remarkable how much of the 1958 paper remains releveant today (lokacija: ~/Books/Papers).

> It is not my aim to surprise or shock you - but the simplest way I can summarize is to say that there are now in the world machines that think, that learn and that create. Moreover, their ability to do these things is going to increase rapidly until - in a visible future - the range of problems they can handle will be coextensive with the range to which the human mind has been applied.
>
> **Herbert Simon (1957)**

Through the 60-year history of computer science, the emphasis has been on the _algorithm_ as the main subject of study. But some recent work in AI suggests that for many problems, it
makes more sense to worry about the data and be less picky about what algorithm to apply. This is true because of the increasing availability of very large data sources.
