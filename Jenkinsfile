def NAME
pipeline{
  agent any
  stages{
    
    stage('build'){
      steps
      {
        powershell "dir"
        script{
        NAME=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'")
        }
      }
    }
    stage('run'){
      steps
      {
          echo "${name} "
      }
    }
  }
}

