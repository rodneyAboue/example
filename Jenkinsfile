script{
       def NAME=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'")
}
pipeline{
  agent any
  stages{
    
    stage('build'){
      steps
      {
        powershell "dir"
      }
    }
    stage('run'){
      steps
      {
        script{
          echo "${NAME} "
        }
      }
    }
  }
}

