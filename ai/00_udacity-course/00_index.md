# AI Udacity Course

Notes taken from the course called Intro to Artificial Intelligence offered on Udacity.

## 1. Welcome to AI

* An AI program is called intelligent agent.
* **Fully observable** - everything that an agent sees in any point of time is completely enough for the agent to make a decision.
* **Partially observable** - an agent will need a way to store the data so it can predict its future move depending on its previous moves.
* **Deterministic** - every action is completely predictable and dealt with in a familiar way.
* **Stochastic** - there are some actions that are completely random.
* **Discrete** - there's a finite amount of solutions.
* **Continuous** - there's an infinite amount of solutions.
* **Benign** - basically not looking for a way to get you.
* **Adversarial** - the name says it all.

![image]()

## 2. Problem Solving

Problem solving works when the domain is:
  1. Fully observable.
  2. Known - we know a number of possible actions.
  3. Discrete - there is a final number of possibilities.
  4. Deterministic - we have to know the result in advance.
  5. Nothing can be changed during the execution (static).

* **Breadth first search** - You check every single solution from the top to the bottom. You start at the first level, then you go to the second level, counting all the 2nd level steps, after which you go to the third level.

* **Depth first** - You check every single solution by lowering yourself to the bottom of the tree. So, you go from level one, down to level two, down to level three and so on (marking _n_ as the lowest level possible). Then, you go to the level _n-1_ and examine if there are some other paths that you can take from there down to the _n_-th level.


 ## Problem Set 1
