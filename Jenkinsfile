pipeline{
  agent any
  stages{
    script{
      def name=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'") 
      def url= env.GIT_URL
      def commit= env.GIT_COMMIT
    }
  stage('build'){
      steps
      {
        try{
            echo "name: ${name} url: ${url}"
        }catch(e){
          slackSend channel: '#ci', message: 'Build failed '
        }
        
      }
    }
  }
}
