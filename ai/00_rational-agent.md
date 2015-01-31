# The Rational Agent Approach

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

We say an environment is uncertain if it is not fully observable or not deterministic. The rational agent should be **stochastic**, which means that it should be able "learn" what to do when something unpredictable happens. For example, a flat tire on a car or any other type of malfunctioning of the system. It should be able to find a solution on how fix it automatically.

If the environment can change while an agent is deliberating, then we say the environment is dynamic for that agent; otherwise, it is static. The real rational agent should behave in a dynamic environment.

The rational agent should also distinguish between known and unknown. For example, if I give him a game that's played with keyboard shortcuts _without_ giving him information on which keys work, he should be able to figure that out by trying different keyboard shortcuts and drawing conclusions. An easy example is the game of Solitaire, where he can't predict the next card in the deck, but he _should_ be able to predict cards the next time he starts drawing cards from the beginning by reminding himself how cards were placed the last time he draw them.

The rational agent should behave well in all of these situations: *partially observable*, *multiagent*, *stochastic*, *sequential*, *dynamic*, *continuous*, and *unknown*.
