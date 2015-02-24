# How to Make PA Happen?

After going through hundreds of articles, I finally have _something_!

First of all, what I am trying to create is (obviously) called a Chatbot.

So, how to make Chatbot?

First of all, Chatbots need to know some basic facts. That's why I came up with [ConceptNet 5](http://conceptnet5.media.mit.edu/)! This is going to help me big time!

Next thing that I need to implement is the translation between Canadian and UK styles of writing. So, the Chatbot should be able to translate all of those into the American-style English.

Next stop: common English mistakes. The Chatbot should be able to "correct" some commonly miss-speled words.

I'm going to need to distinguish four different types of questions:

1. **CH**: Choice or Alternate Question. The question is asking you to pick between two or more things. For example: Is the water hot or cold?
2. **WH**: Question are the most common, they come in the form of **who**, **what**, **where**, **when** or **why**.
3. **YN**: Simple **Yes**/**No** Question are fairly self explanation. For example: Do you have a pencil?
4. **TG**: Tag Question are not really questions, but are ways of asking questions to keep the conversation open. They are statements that usually end in a pronoun, and add a positive or negative ending, for example: It’s beautiful, **isn’t it**? or Sally went to the store, **didn’t she**?

He's going to have to remember some basic answers. Let's say that he remembers the last 50 questions or so. He should also be able to find a way to remember some questions permanently, like what is his name and similar. He definitely _should not_ behave arrogant as Chatbot behaves sometimes (see 99_cleverbot-conversation.md for the reference). And that's pretty much it.
