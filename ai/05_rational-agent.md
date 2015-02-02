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

    agent = architecture + program

* Agent program - takes the current percept as input
* Agent function - takes the entire percept history

If the agent’s actions need to depend on the entire percept sequence, the agent will have to remember the percepts.

The key challenge for AI is to find out how to write programs that produce rational behavior from a smallish program rather than from a vast table.

### Simple Reflex Agents

* It's the simplest kind of agent.
* Actions are selected on the basis of the current percept, ignoring the rest of the percept history.
* Works only if the environment is fully observable.
* Infinite loops are often unavoidable when operating in partially observable environments (although escape _is_ possible if the agen can randomize its actions).
* Randomization is usually _not_ rational in the single-agent environment. But it is a useful trick that helps in _some_ situations. In most cases, we can do better with more sophisticated deterministic agents.

Example:

    **if** *car-in-front-is-braking* **then** *initiate-braking*

### Model-Based Reflex Agents

* The most effective way to handle partial observability is to keep track of the part of the world it can't see right now.
* We need to know:
  * how agent's actions can afffect the world around it
  * how the world around it evolves independently of the agent.
* Knowledge about "how the world works" is called a **model** of the world, which is why we call them **model-based agents**.
* Agents' knowledge on what the world is like now consists of _best guesses_, because we can't always _know_ what are the concequences of an action.

### Goal-Based Agents

* The agents _need_ some sort of goal information that describes situations that are desirable.
* Sometimes, it's an easy two-way decision. Sometimes, the agent has consider long sequences of twists and turns in order to find a way to archieve its goal.
* The goal-based agent appears to be less efficient, but it is more flexible.

### Utility-Based Agents

* Goals alone are not enough to generate high-quality behavior in most environments.
* **Utility** - the quality of being useful. Replacement for the term "happy", which does not sound very scientific.
* If the internal utility function and the external performance
measure are in agreement, then an agent that chooses actions to maximize its utility will be rational according to the external performance measure.
* This is _not_ the _only_ way for an agent to be rational.
* When there are conflicting goals, the utility function specifies the appropriate tradeoff.
* Utility provides a way in which the likelihood of success can be wighed against the importance of the goals in the case when there are several goals that the agent can aim for.
* Choosing the utility-maximizing course of action is a difficult task.
* Even with ingenious algorithms, perfect rationality is usually
unachievable in practice because of computational complexity.

**TODO: Insert a picture after the pull request**

### Learning Agents

* The method proposed by Turing is to build learning machines and then to teach them.
* **Learning element** - responsible for making improvements.
* **Performance element** - responsible for selecting external actions.
* The first question is not “How am I going to get it to learn this?” but “What kind of performance element will my agent need to do this once it has learned how?”
* The learning element uses feedback from the critic. The critic tells the learning element how well the agent is doing with respect to a fixed performance standard.
* **Problem generator** is responsible for suggesting actions that will lead to new and informative experiences.

> Learning in intelligent agents can be summarized as a process of modification of each component of the agent to bring the components into closer agreement with the available feedback information, thereby improving the overall performance of the agent.
