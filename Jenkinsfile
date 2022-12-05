
pipeline{
  agent any
  stages{
    stage('build'){
      steps
      {
        echo "Running ${env.BUILD_ID} on ${env.JENKINS_URL}"
        powershell "xmake -y"
        echo "GIT_COMMIT: ${env.GIT_COMMIT}"
        echo "GIT_BRANCH: ${env.GIT_BRANCH}"
        echo "GIT_LOCAL_BRANCH: ${env.GIT_LOCAL_BRANCH}"
        echo "GIT_PREVIOUS_COMMIT: ${env.GIT_PREVIOUS_COMMIT}"
        echo "GIT_PREVIOUS_SUCCESSFUL_COMMIT: ${env.GIT_PREVIOUS_SUCCESSFUL_COMMIT}"
        echo "GIT_URL: ${env.GIT_URL}"
        echo "GIT_URL_N: ${env.GIT_URL_N}"
        echo "GIT_AUTHOR_NAME: ${env.GIT_AUTHOR_NAME}"
        echo "GIT_COMMITTER_EMAIL: ${env.GIT_COMMITTER_EMAIL}"
        
        // GIT_COMMIT = ${env.GIT_COMMIT}
        // GIT_NAME = $(git --no-pager show -s --format='%an' $GIT_COMMIT)
        // GIT_EMAIL = $(git --no-pager show -s --format='%ae' $GIT_COMMIT)
        // echo "GIT_COMMIT: ${GIT_COMMIT}"
        // echo "GIT_NAME: ${GIT_NAME}"
        // echo "GIT_EMAIL: ${GIT_EMAIL}"
        
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
        echo "GIT_COMMIT: ${env.GIT_COMMIT}"
        echo "GIT_BRANCH: ${env.GIT_BRANCH}"
        echo "GIT_LOCAL_BRANCH: ${env.GIT_LOCAL_BRANCH}"
        echo "GIT_PREVIOUS_COMMIT: ${env.GIT_PREVIOUS_COMMIT}"
        echo "GIT_PREVIOUS_SUCCESSFUL_COMMIT: ${env.GIT_PREVIOUS_SUCCESSFUL_COMMIT}"
        echo "GIT_URL: ${env.GIT_URL}"
        echo "GIT_URL_N: ${env.GIT_URL_N}"
        echo "GIT_AUTHOR_NAME: ${env.GIT_AUTHOR_NAME}"
        echo "GIT_COMMITTER_EMAIL: ${env.GIT_COMMITTER_EMAIL}"
      }
    }
    stage("Env Variables") {
            steps {
                powershell "dir env:"
            }
        }
  }
}
