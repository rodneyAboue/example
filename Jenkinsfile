
pipeline{
  agent any
  stages{
    stage('build'){
      steps
      {
        echo "Running ${env.BUILD_ID} on ${env.JENKINS_URL}"
        powershell "xmake -y"
        // echo  "auteur : ${env.CHANGE_AUTHOR} ${env.CHANGE_AUTHOR_EMAIL} ${env.CHANGE_AUTHOR_DISPLAY_NAME}"
      }
    }
    stage('run'){
      steps
      {
        def name=powershell "git log -1 --pretty=format:'%an'"
        powershell "xmake run"
        echo "${name}"
      }
    }
  }
}
