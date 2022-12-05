pipeline{
  agent any
  stages{
    stage('build'){
      steps
      {
        powershell "xmake -y"
        echo  "auteur : ${env.CHANGE_AUTHOR} ${env.CHANGE_AUTHOR_EMAIL} ${env.CHANGE_AUTHOR_DISPLAY_NAME}"
      }
    }
    stage('run'){
      steps
      {
        powershell "xmake run"
      }
    }
    stage('message'){
      steps
      {
slackSend channel: '#ci', failOnError: false, message: "Build Started: ${env.JOB_NAME} ${env.BUILD_NUMBER} author:${env.CHANGE_URL}", tokenCredentialId: 'slack-token'
      }
    }
  }
}
