pipeline{
  agent any
  stages{
    stage('build'){
      steps
      {
        powershell "xmake -y"
        echo  ${env.CHANGE_AUTHOR}
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
slackSend channel: '#ci', failOnError: false, message: "Build Started: ${env.JOB_NAME} ${env.BUILD_NUMBER} author:", tokenCredentialId: 'slack-token'
      }
    }
  }
}
