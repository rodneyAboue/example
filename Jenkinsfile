pipeline{
  agent any
  stages{

  stage('build'){
      steps
      {
        try{
          powershell "xmake -y"
        }catch(e){
          script{
            def name=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'") 
            slackSend channel: '#ci', message: "Build failed on stage build: Author: ${name} repository: ${env.GIT_URL} commit: ${env.GIT_COMMIT}"
          }
        }
      }  
    }
  }
}
