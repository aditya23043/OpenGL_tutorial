> Finally, I hope this is the last "OpenGL" directory I have to create in my coding repository since I have been leaving this fantastic tutorial always at the midpoint (about the point where we learn about IBOs). Not sure if that is the midpoint or not. 

# Resource(s) used
- The most amazing resource ever -> https://learnopengl.com
- I have never came across a better wiki about a topic than this
- Do note that Arch Wiki comes very closer to this.

> This might be the first time I am using the SF Mono font in the regular weight and this akshually looks really cool

- 2025-02-05 23:09 > Making this as a separate repository so that I am actually reminded that I should complete this tutorial since I want my GitHub data chart to go up of course

> Motivation for me -> Remember when you went through like 50% of the FreeCodeCamp tutorial of OpenGL on your way back from Sikkim in Papa's RA when everyone else was taking rest and I was sitting in the Dining / Living Room part of the RA (Salon)

# Tutorial

## Starting Out
- We have to create a window, define a context and handle user input all by ourselves

### GLFW
- C library which gives us the basic rendering capabilities and allows us to create an OpenGL context, define window params and handle user input
- In order to add this library, get the prebuilt binary from https://www.glfw.org/download.html
- I am downloading GLFW ver 3.4 i.e. the latest ver of GLFW as of now

- BRO WHAT
- I was trying to download the prebuilt binary of GLFW
- But, by mistake I downloaded the whole github repo of GLFW 
- So then I am like if I have cloned the repo, why not just build it myself
- So I do the usual stuff, created a build/ dir then cd into it and then did `cmake ../` and then `make`
- Then, I am confused. I can't find a bin/ folder
- So, I just wander around in the build/ folder and come across the examples/ dir
- Out of curiosity, I see that there are ELF files
- So, I just run the most goofy sounding one, `./examples/boing`
- And there it is, a ball going boing all over the place and there is lighting with shadow
- And that looked so cool
- So as of now, instead of proceeding with OpenGL, I would like to discover GLFW further since its not just a basic rendering library.
- Its all I need
- And bonus points DING DING DING, it is written in C
- So Cool!
- I have followed this OpenGL tutorial 2/3 times in the past but never thought that GLFW was such a complete library on its own as well
