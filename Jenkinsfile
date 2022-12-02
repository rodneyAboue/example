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
        powershell "xmake run"
      }
    }
    stage('message'){
      steps
      {
slackSend channel: '#ci', failOnError: false, message: 'failed', tokenCredentialId: 'slack-token'
      }
    }
  }
}
