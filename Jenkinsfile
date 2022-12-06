
pipeline{
  agent any
  stages{
    def NAME
    stage('build'){
      steps
      {
        script{
                     NAME=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'")
              }
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

