
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
          def name=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'") 
          echo "${name}"
        }
      }
    }
  }
}

