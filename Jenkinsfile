
pipeline{
  agent any
  stages{
    stage('build'){
      steps
      {
        powershell "dir"
      }
    }
    stage('run'){
      steps
      {
        script{
          def name=powershell(returnStdout: true, script: "git log -1 --pretty=format:'%an'") 
          def url=$env.GIT_URL
          def commit=$env.GIT_COMMIT
          def branch=$env.GIT_BRANCH
          echo "${name} ${url} ${commit} ${branch} "
        }
      }
    }
  }
}

