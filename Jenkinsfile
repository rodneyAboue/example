
pipeline{
  agent any
  stages{
    def name=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'")
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
           
          echo "${name} "
        }
      }
    }
  }
}

