# <h4>git 사용설명서</h4>

* bash 사용
1. 내가 git에 올릴(커밋 할) 파일이 있는 폴더에 들어갑니다.
2. 마우스 오른클릭을 하고 `'git bash here'`을 누릅니다.

3. bash 창이 열리면 우선 `'git pull upstream develop'` 명령어를 통해 로컬 저장소를 최신 상태로 만들어줍니다.

4. 그 다음 `'git add 파일명.확장자'` 명령어를 통해 커밋할 파일을 추가합니다. <br/> * 만약 파일이 여러개라면 계속해서 add 해줍니다. <br/> `ex) git add README.md` 

5. `'git commit -m "자신이 보낼 메세지"'` 명령어를 통해 커밋해 줍니다. <br/> `ex) git commit -m "hello"`

6. `'git push origin develop'` 명령어를 통해 커밋한 파일을 원격저장소에 올려줍니다. 

* git 페이지
1. 자신의 깃 페이지의 `report` repository에 들어갑니다.
2. `pull requests` 메뉴에 들어갑니다.
3. 오른쪽에 보이는 `new pull request`버튼을 눌러줍니다.
4. 만약 compare 항목이 master로 되어있으면 develop으로 바꿔주고 base 항목도 마찬가지입니다.
5. `create pull request`의 초록색 박스를 눌러줍니다.
6. 자신이 쓰고 싶은 내용을 써주고 create pull request 버튼을 눌러줍니다. 
7. 밑에 보이는 `merge pull request`버튼을 누르고 `confirm merge` 버튼을 눌러줍니다.
8. 끝!!!