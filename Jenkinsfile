
pipeline{
  agent any
  stages{
    stage('build'){
      steps
      {
        echo "Running ${env.BUILD_ID} on ${env.JENKINS_URL}"
        powershell "xmake -y"
        echo "GIT_COMMIT: %GIT_COMMIT%" 
        echo "GIT_BRANCH: %GIT_BRANCH%"
        echo "GIT_LOCAL_BRANCH: %GIT_LOCAL_BRANCH%"
        echo "GIT_PREVIOUS_COMMIT: %GIT_PREVIOUS_COMMIT%"
        echo "GIT_PREVIOUS_SUCCESSFUL_COMMIT: %GIT_PREVIOUS_SUCCESSFUL_COMMIT%"
        echo "GIT_URL: %GIT_URL%"
        echo "GIT_URL_N: %GIT_URL_N%"
        echo "GIT_AUTHOR_NAME: %GIT_AUTHOR_NAME%"
        echo "GIT_COMMITTER_EMAIL: %GIT_COMMITTER_EMAIL%"
        // echo  "auteur : ${env.CHANGE_AUTHOR} ${env.CHANGE_AUTHOR_EMAIL} ${env.CHANGE_AUTHOR_DISPLAY_NAME}"
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
        echo "GIT_COMMIT: %GIT_COMMIT%" 
        echo "GIT_BRANCH: %GIT_BRANCH%"
        echo "GIT_LOCAL_BRANCH: %GIT_LOCAL_BRANCH%"
        echo "GIT_PREVIOUS_COMMIT: %GIT_PREVIOUS_COMMIT%"
        echo "GIT_PREVIOUS_SUCCESSFUL_COMMIT: %GIT_PREVIOUS_SUCCESSFUL_COMMIT%"
        echo "GIT_URL: %GIT_URL%"
        echo "GIT_URL_N: %GIT_URL_N%"
        echo "GIT_AUTHOR_NAME: %GIT_AUTHOR_NAME%"
        echo "GIT_COMMITTER_EMAIL: %GIT_COMMITTER_EMAIL%"
        // echo "${env.GIT_AUTHOR_NAME} ${env.GIT_COMMITTER_NAME} author:${env.CHANGE_URL}"
      }
    }
    stage("Env Variables") {
            steps {
                sh "printenv"
            }
        }
  }
}
