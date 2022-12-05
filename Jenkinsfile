
pipeline{
  agent any
  stages{
    stage('build'){
      steps
      {
        powershell "xmake -y"
      }
    }
    stage('run'){
      steps
      {
        script{
         def name=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'") 
         echo name
          powershell "dir env:"
        }
      }
    }
  }
}
