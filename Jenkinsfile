
pipeline{
  agent any
  stages{
    
    stage('build'){
      steps
      {
        script{
               def NAME=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'")
           echo "${NAME} "
              }
        powershell "dir"
      }
    }
  }
}

