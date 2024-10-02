# CoRL2018Constraint
Code for CoRL2018: Inferring geometric constraints in human demonstrations

## Add Documentation on Learning Prismatic, Revolute and Planer Constraints 

## Setup Environment 
* Use the Dockerfile to build a working environment. 
* The constraint equations are generated using sympy code generation. Each constraint model autogenerates into it's own python module. 
* The Dockerfile will generate all these files for you. 

## Usage
* Build constraint functions by running
```
roscd CoRL2018Constraint
cd src/
python3 constraint_recognition/constraint_equations/geometric_constraints.py
```

## TroubleShooting
* If Python could not find the module of the build constraint models
  * Rebuild the constraint equations in the new python environment

