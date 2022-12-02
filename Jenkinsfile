  pipeline{
  agent any
    stages{
      stage('build'){
        steps{
          powershell "xmake -y"
        }
      }
       stage('run'){
         steps{
          powershell "xmake run"
         }
     }
     post {
            failure {
                slackSend failOnError:true message:"Build failed  - ${env.JOB_NAME} ${env.BUILD_NUMBER} (<${env.BUILD_URL}|Open>)"
            }
        }
    }
  }
