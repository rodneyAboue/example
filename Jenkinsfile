  pipeline{
  agent any
    stages{
      stage('build'){
        steps{
          powershell "xmake -y"
        }
      }
       stage('run'){
         steps{
          powershell "xmake run"
         }
     }
    }
  }
