  pipeline{
  agent any
    stages{
      stage('build'){
        dir('./example') {
          powershell "xmake -y"
        }
     }
       stage('run'){
        dir('./example') {
          powershell "xmake run"
        }
     }
    }
  }
