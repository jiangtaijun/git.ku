git note
git add                   :添加到暂存区 
git commit -m "备注"	  :上传仓库区
git status                :检查工作去是否有未上传内容
git diff 文件名           :检查工作区文件与暂存区文件区别
git log                   :最近上传历史记录
git log -pretty=oneline   :最近上传历史记录一行内简短信息
git reset --hard 历史版本 :回退到指定历史版本
git reset --hard HEAD     :退回上个版本
git checkout -- 文件名    :从仓库恢复文件到工作区，覆盖工作区内文件
rm 文件名                 :删除文件
git branch                :查看分支
git branch name           :创建name分支
git checkout name     	  :切换分支
git checkout -b name      :创建+切换分支
git merge name            :将name分支合并到master
git branch - d name       :删除分支
git remote                :查看远程库
git remote -v             :查看远程库详细信息
git push origin master    :上传本地库中master分支