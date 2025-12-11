---
layout: lua
title: CrewMember
lang: en
---

# Class "CrewMember"


## Constructors
### CrewMember ()
{: aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ()
{: aria-label='Constructors' }

______
### CrewMember ()
{: aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp, integer shipId, boolean enemy, [CrewAnimation](../Hyperspace/CrewAnimation) animation)
{: aria-label='Constructors' }

___



## Static Methods
### GetSkillFromSystem ()
{: aria-label='StaticMethods' }
#### integer .GetSkillFromSystem (integer systemId)
{: aria-label='StaticMethods' }

___


## Methods
### ActivatePower ()
{: aria-label='Methods' }
#### void :ActivatePower ()
{: aria-label='Methods' }

______
### ApplyDamage ()
{: aria-label='Methods' }
#### boolean :ApplyDamage (number damage)
{: aria-label='Methods' }

______
### AtFinalGoal ()
{: aria-label='Methods' }
#### boolean :AtFinalGoal ()
{: aria-label='Methods' }

______
### AtGoal ()
{: aria-label='Methods' }
#### boolean :AtGoal ()
{: aria-label='Methods' }

______
### BadAtCombat ()
{: aria-label='Methods' }
#### boolean :BadAtCombat ()
{: aria-label='Methods' }

______
### BlockRoom ()
{: aria-label='Methods' }
#### integer :BlockRoom ()
{: aria-label='Methods' }

______
### CanBurn ()
{: aria-label='Methods' }
#### boolean :CanBurn ()
{: aria-label='Methods' }

______
### CanFight ()
{: aria-label='Methods' }
#### boolean :CanFight ()
{: aria-label='Methods' }

______
### CanHeal ()
{: aria-label='Methods' }
#### boolean :CanHeal ()
{: aria-label='Methods' }

______
### CanMan ()
{: aria-label='Methods' }
#### boolean :CanMan ()
{: aria-label='Methods' }

______
### CanRepair ()
{: aria-label='Methods' }
#### boolean :CanRepair ()
{: aria-label='Methods' }

______
### CanSabotage ()
{: aria-label='Methods' }
#### boolean :CanSabotage ()
{: aria-label='Methods' }

______
### CanStim ()
{: aria-label='Methods' }
#### boolean :CanStim ()
{: aria-label='Methods' }

______
### CanSuffocate ()
{: aria-label='Methods' }
#### boolean :CanSuffocate ()
{: aria-label='Methods' }

______
### CanTeleport ()
{: aria-label='Methods' }
#### boolean :CanTeleport ()
{: aria-label='Methods' }

______
### CheckFighting ()
{: aria-label='Methods' }
#### void :CheckFighting ()
{: aria-label='Methods' }

______
### CheckForTeleport ()
{: aria-label='Methods' }
#### void :CheckForTeleport ()
{: aria-label='Methods' }

______
### CheckRoomPath ()
{: aria-label='Methods' }
#### boolean :CheckRoomPath (integer roomId)
{: aria-label='Methods' }

______
### CheckSkills ()
{: aria-label='Methods' }
#### void :CheckSkills ()
{: aria-label='Methods' }

______
### Cleanup ()
{: aria-label='Methods' }
#### void :Cleanup ()
{: aria-label='Methods' }

______
### ClearPath ()
{: aria-label='Methods' }
#### void :ClearPath ()
{: aria-label='Methods' }

______
### ClearPosition ()
{: aria-label='Methods' }
#### void :ClearPosition ()
{: aria-label='Methods' }

______
### ClearTask ()
{: aria-label='Methods' }
#### void :ClearTask ()
{: aria-label='Methods' }

______
### Clone ()
{: aria-label='Methods' }
#### void :Clone ()
{: aria-label='Methods' }

______
### CloseDoorBehind ()
{: aria-label='Methods' }
#### void :CloseDoorBehind ([Door](../Hyperspace/Door) door)
{: aria-label='Methods' }

______
### ContainsPoint ()
{: aria-label='Methods' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Methods' }

______
### CountForVictory ()
{: aria-label='Methods' }
#### boolean :CountForVictory ()
{: aria-label='Methods' }

______
### CycleColorLayer ()
{: aria-label='Methods' }
#### void :CycleColorLayer (integer unk)
{: aria-label='Methods' }

______
### DirectModifyHealth ()
{: aria-label='Methods' }
#### boolean :DirectModifyHealth (number health)
{: aria-label='Methods' }

______
### EmptySlot ()
{: aria-label='Methods' }
#### void :EmptySlot ()
{: aria-label='Methods' }

______
### ExactTarget ()
{: aria-label='Methods' }
#### boolean :ExactTarget ()
{: aria-label='Methods' }

______
### FindSlot ()
{: aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :FindSlot (integer roomId, integer slotId, boolean closeEnough)
{: aria-label='Methods' }

______
### FireFightingSoundEffect ()
{: aria-label='Methods' }
#### boolean :FireFightingSoundEffect ()
{: aria-label='Methods' }

______
### ForceMindControl ()
{: aria-label='Methods' }
#### void :ForceMindControl (boolean force)
{: aria-label='Methods' }

______
### Functional ()
{: aria-label='Methods' }
#### boolean :Functional ()
{: aria-label='Methods' }

______
### GetControllable ()
{: aria-label='Methods' }
#### boolean :GetControllable ()
{: aria-label='Methods' }

______
### GetDamageMultiplier ()
{: aria-label='Methods' }
#### number :GetDamageMultiplier ()
{: aria-label='Methods' }

______
### GetFinalGoal ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetFinalGoal ()
{: aria-label='Methods' }

______
### GetFireRepairMultiplier ()
{: aria-label='Methods' }
#### number :GetFireRepairMultiplier ()
{: aria-label='Methods' }

______
### GetIntegerHealth ()
{: aria-label='Methods' }
#### integer :GetIntegerHealth ()
{: aria-label='Methods' }

______
### GetIntruder ()
{: aria-label='Methods' }
#### boolean :GetIntruder ()
{: aria-label='Methods' }

______
### GetLocation ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetLocation ()
{: aria-label='Methods' }

______
### GetLongName ()
{: aria-label='Methods' }
#### string :GetLongName ()
{: aria-label='Methods' }

______
### GetMaxHealth ()
{: aria-label='Methods' }
#### integer :GetMaxHealth ()
{: aria-label='Methods' }

______
### GetMoveSpeed ()
{: aria-label='Methods' }
#### number :GetMoveSpeed ()
{: aria-label='Methods' }

______
### GetMoveSpeedMultiplier ()
{: aria-label='Methods' }
#### number :GetMoveSpeedMultiplier ()
{: aria-label='Methods' }

______
### GetName ()
{: aria-label='Methods' }
#### string :GetName ()
{: aria-label='Methods' }

______
### GetNewGoal ()
{: aria-label='Methods' }
#### boolean :GetNewGoal ()
{: aria-label='Methods' }

______
### GetNextGoal ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetNextGoal ()
{: aria-label='Methods' }

______
### GetPosition ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetPosition ()
{: aria-label='Methods' }

______
### GetPowerCooldown ()
{: aria-label='Methods' }
#### pair\<number, number\> :GetPowerCooldown ()
{: aria-label='Methods' }

______
### GetPriority ()
{: aria-label='Methods' }
#### integer :GetPriority ()
{: aria-label='Methods' }

______
### GetRepairSpeed ()
{: aria-label='Methods' }
#### number :GetRepairSpeed ()
{: aria-label='Methods' }

______
### GetRepairingId ()
{: aria-label='Methods' }
#### integer :GetRepairingId ()
{: aria-label='Methods' }

______
### GetResisted ()
{: aria-label='Methods' }
#### boolean :GetResisted ()
{: aria-label='Methods' }

______
### GetRoomDamage ()
{: aria-label='Methods' }
#### [Damage](../Hyperspace/Damage) :GetRoomDamage ()
{: aria-label='Methods' }

______
### GetSavedPosition ()
{: aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetSavedPosition ()
{: aria-label='Methods' }

______
### GetSkillLevel ()
{: aria-label='Methods' }
#### integer :GetSkillLevel (integer skillId)
{: aria-label='Methods' }

______
### GetSkillModifier ()
{: aria-label='Methods' }
#### number :GetSkillModifier (integer skillId)
{: aria-label='Methods' }

______
### GetSkillProgress ()
{: aria-label='Methods' }
#### pair\<integer, integer\> :GetSkillProgress (integer skillId)
{: aria-label='Methods' }

______
### GetSpecies ()
{: aria-label='Methods' }
#### string :GetSpecies ()
{: aria-label='Methods' }

______
### GetSuffocationMultiplier ()
{: aria-label='Methods' }
#### number :GetSuffocationMultiplier ()
{: aria-label='Methods' }

______
### GetTooltip ()
{: aria-label='Methods' }
#### string :GetTooltip ()
{: aria-label='Methods' }

______
### GetUniqueRepairing ()
{: aria-label='Methods' }
#### string :GetUniqueRepairing ()
{: aria-label='Methods' }

______
### HasSpecialPower ()
{: aria-label='Methods' }
#### boolean :HasSpecialPower ()
{: aria-label='Methods' }

______
### IncreaseSkill ()
{: aria-label='Methods' }
#### void :IncreaseSkill (integer skillId)
{: aria-label='Methods' }

______
### InitializeSkills ()
{: aria-label='Methods' }
#### void :InitializeSkills ()
{: aria-label='Methods' }

______
### InsideRoom ()
{: aria-label='Methods' }
#### boolean :InsideRoom (integer roomId)
{: aria-label='Methods' }

______
### IsAnaerobic ()
{: aria-label='Methods' }
#### boolean :IsAnaerobic ()
{: aria-label='Methods' }

______
### IsBusy ()
{: aria-label='Methods' }
#### boolean :IsBusy ()
{: aria-label='Methods' }

______
### IsCloned ()
{: aria-label='Methods' }
#### boolean :IsCloned ()
{: aria-label='Methods' }

______
### IsCrew ()
{: aria-label='Methods' }
#### boolean :IsCrew ()
{: aria-label='Methods' }

______
### IsDead ()
{: aria-label='Methods' }
#### boolean :IsDead ()
{: aria-label='Methods' }

______
### IsDrone ()
{: aria-label='Methods' }
#### boolean :IsDrone ()
{: aria-label='Methods' }

______
### IsManningArtillery ()
{: aria-label='Methods' }
#### boolean :IsManningArtillery ()
{: aria-label='Methods' }

______
### IsTelepathic ()
{: aria-label='Methods' }
#### boolean :IsTelepathic ()
{: aria-label='Methods' }

______
### Jump ()
{: aria-label='Methods' }
#### void :Jump ()
{: aria-label='Methods' }

______
### Kill ()
{: aria-label='Methods' }
#### void :Kill (boolean noClone)
{: aria-label='Methods' }

______
### LoadState ()
{: aria-label='Methods' }
#### void :LoadState (integer fileHelper)
{: aria-label='Methods' }

______
### MasterSkill ()
{: aria-label='Methods' }
#### void :MasterSkill (integer skillId)
{: aria-label='Methods' }

______
### ModifyHealth ()
{: aria-label='Methods' }
#### void :ModifyHealth (number health)
{: aria-label='Methods' }

______
### MoveToRoom ()
{: aria-label='Methods' }
#### boolean :MoveToRoom (integer roomId, integer slotId, boolean forceMove)
{: aria-label='Methods' }

______
### MultiShots ()
{: aria-label='Methods' }
#### boolean :MultiShots ()
{: aria-label='Methods' }

______
### NeedFrozenLocation ()
{: aria-label='Methods' }
#### boolean :NeedFrozenLocation ()
{: aria-label='Methods' }

______
### NeedsSlot ()
{: aria-label='Methods' }
#### boolean :NeedsSlot ()
{: aria-label='Methods' }

______
### OnInit ()
{: aria-label='Methods' }
#### boolean :OnInit ()
{: aria-label='Methods' }

______
### OnLoop ()
{: aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

______
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender (boolean outlineOnly)
{: aria-label='Methods' }

______
### OnRenderHealth ()
{: aria-label='Methods' }
#### void :OnRenderHealth ()
{: aria-label='Methods' }

______
### OnRenderPath ()
{: aria-label='Methods' }
#### void :OnRenderPath ()
{: aria-label='Methods' }

______
### OutOfGame ()
{: aria-label='Methods' }
#### boolean :OutOfGame ()
{: aria-label='Methods' }

______
### PermanentDeath ()
{: aria-label='Methods' }
#### boolean :PermanentDeath ()
{: aria-label='Methods' }

______
### PositionShift ()
{: aria-label='Methods' }
#### number :PositionShift ()
{: aria-label='Methods' }

______
### PowerReady ()
{: aria-label='Methods' }
#### boolean :PowerReady ()
{: aria-label='Methods' }

______
### ProvidesPower ()
{: aria-label='Methods' }
#### boolean :ProvidesPower ()
{: aria-label='Methods' }

______
### ProvidesVision ()
{: aria-label='Methods' }
#### boolean :ProvidesVision ()
{: aria-label='Methods' }

______
### ReadyToFight ()
{: aria-label='Methods' }
#### boolean :ReadyToFight ()
{: aria-label='Methods' }

______
### RenderSkillUpAnimation ()
{: aria-label='Methods' }
#### void :RenderSkillUpAnimation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

______
### Repairing ()
{: aria-label='Methods' }
#### boolean :Repairing ()
{: aria-label='Methods' }

______
### RepairingFire ()
{: aria-label='Methods' }
#### boolean :RepairingFire ()
{: aria-label='Methods' }

______
### RepairingSystem ()
{: aria-label='Methods' }
#### boolean :RepairingSystem ()
{: aria-label='Methods' }

______
### ResetPower ()
{: aria-label='Methods' }
#### void :ResetPower ()
{: aria-label='Methods' }

______
### Restart ()
{: aria-label='Methods' }
#### void :Restart ()
{: aria-label='Methods' }

______
### RestorePosition ()
{: aria-label='Methods' }
#### boolean :RestorePosition ()
{: aria-label='Methods' }

______
### Sabotaging ()
{: aria-label='Methods' }
#### boolean :Sabotaging ()
{: aria-label='Methods' }

______
### SavePosition ()
{: aria-label='Methods' }
#### void :SavePosition ()
{: aria-label='Methods' }

______
### SaveState ()
{: aria-label='Methods' }
#### void :SaveState (integer fileHelper)
{: aria-label='Methods' }

______
### SelectSabotageTarget ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :SelectSabotageTarget ()
{: aria-label='Methods' }

______
### SetCloneReady ()
{: aria-label='Methods' }
#### void :SetCloneReady (boolean cloneReady)
{: aria-label='Methods' }

______
### SetCurrentShip ()
{: aria-label='Methods' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Methods' }

______
### SetCurrentSystem ()
{: aria-label='Methods' }
#### void :SetCurrentSystem ([ShipSystem](../Hyperspace/ShipSystem) sys)
{: aria-label='Methods' }

______
### SetCurrentTarget ()
{: aria-label='Methods' }
#### void :SetCurrentTarget ([StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) target, boolean unk)
{: aria-label='Methods' }

______
### SetDamageBoost ()
{: aria-label='Methods' }
#### void :SetDamageBoost (number damageBoost)
{: aria-label='Methods' }

______
### SetDeathNumber ()
{: aria-label='Methods' }
#### void :SetDeathNumber (integer deathNum)
{: aria-label='Methods' }

______
### SetFrozen ()
{: aria-label='Methods' }
#### void :SetFrozen (boolean frozen)
{: aria-label='Methods' }

______
### SetFrozenLocation ()
{: aria-label='Methods' }
#### void :SetFrozenLocation (boolean frozenLocation)
{: aria-label='Methods' }

______
### SetHealthBoost ()
{: aria-label='Methods' }
#### void :SetHealthBoost (integer healthBoost)
{: aria-label='Methods' }

______
### SetMedbay ()
{: aria-label='Methods' }
#### void :SetMedbay (number health)
{: aria-label='Methods' }

______
### SetMindControl ()
{: aria-label='Methods' }
#### void :SetMindControl (boolean controlled)
{: aria-label='Methods' }

______
### SetName ()
{: aria-label='Methods' }
#### void :SetName ([TextString](../Hyperspace/TextString) name, boolean force)
{: aria-label='Methods' }

______
### SetOutOfGame ()
{: aria-label='Methods' }
#### void :SetOutOfGame ()
{: aria-label='Methods' }

______
### SetPath ()
{: aria-label='Methods' }
#### boolean :SetPath (Path path)
{: aria-label='Methods' }

______
### SetPosition ()
{: aria-label='Methods' }
#### void :SetPosition ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

______
### SetResisted ()
{: aria-label='Methods' }
#### void :SetResisted (boolean resisted)
{: aria-label='Methods' }

______
### SetRoom ()
{: aria-label='Methods' }
#### void :SetRoom (integer roomId)
{: aria-label='Methods' }

______
### SetRoomPath ()
{: aria-label='Methods' }
#### void :SetRoomPath (integer slotId, integer roomId)
{: aria-label='Methods' }

______
### SetSavePosition ()
{: aria-label='Methods' }
#### void :SetSavePosition ([Slot](../Hyperspace/Slot) position)
{: aria-label='Methods' }

______
### SetSex ()
{: aria-label='Methods' }
#### void :SetSex (boolean male)
{: aria-label='Methods' }

______
### SetSkillProgress ()
{: aria-label='Methods' }
#### void :SetSkillProgress (integer skillId, integer skillLevel)
{: aria-label='Methods' }

______
### SetTask ()
{: aria-label='Methods' }
#### void :SetTask (CrewTask task)
{: aria-label='Methods' }

______
### ShipDamage ()
{: aria-label='Methods' }
#### boolean :ShipDamage (number damage)
{: aria-label='Methods' }

______
### StartRepair ()
{: aria-label='Methods' }
#### void :StartRepair ([Repairable](../Hyperspace/Repairable) toRepair)
{: aria-label='Methods' }

______
### StartTeleport ()
{: aria-label='Methods' }
#### void :StartTeleport ()
{: aria-label='Methods' }

______
### StartTeleportArrive ()
{: aria-label='Methods' }
#### void :StartTeleportArrive ()
{: aria-label='Methods' }

______
### StopRepairing ()
{: aria-label='Methods' }
#### void :StopRepairing ()
{: aria-label='Methods' }

______
### UpdateHealth ()
{: aria-label='Methods' }
#### void :UpdateHealth ()
{: aria-label='Methods' }

______
### UpdateMovement ()
{: aria-label='Methods' }
#### void :UpdateMovement ()
{: aria-label='Methods' }

______
### UpdateRepair ()
{: aria-label='Methods' }
#### void :UpdateRepair ()
{: aria-label='Methods' }

______
### ValidTarget ()
{: aria-label='Methods' }
#### boolean :ValidTarget (integer unk)
{: aria-label='Methods' }

______
### WithinRect ()
{: aria-label='Methods' }
#### boolean :WithinRect (integer x, integer y, integer w, integer h)
{: aria-label='Methods' }

___


## Fields
### bActiveManning
{: aria-label='Fields' }
#### boolean .bActiveManning
{: aria-label='Fields' }

______
### bCloned
{: aria-label='Fields' }
#### boolean .bCloned
{: aria-label='Fields' }

______
### bDead
{: aria-label='Fields' }
#### boolean .bDead
{: aria-label='Fields' }

______
### bFighting
{: aria-label='Fields' }
#### boolean .bFighting
{: aria-label='Fields' }

______
### bFrozen
{: aria-label='Fields' }
#### boolean .bFrozen
{: aria-label='Fields' }

______
### bFrozenLocation
{: aria-label='Fields' }
#### boolean .bFrozenLocation
{: aria-label='Fields' }

______
### bMindControlled
{: aria-label='Fields' }
#### boolean .bMindControlled
{: aria-label='Fields' }

______
### bOutOfGame
{: aria-label='Fields' }
#### boolean .bOutOfGame
{: aria-label='Fields' }

______
### bResisted
{: aria-label='Fields' }
#### boolean .bResisted
{: aria-label='Fields' }

______
### bSharedSpot
{: aria-label='Fields' }
#### boolean .bSharedSpot
{: aria-label='Fields' }

______
### bSuffocating
{: aria-label='Fields' }
#### boolean .bSuffocating
{: aria-label='Fields' }

______
### blockingDoor
{: aria-label='Fields' }
#### [Door](../Hyperspace/Door) .blockingDoor
{: aria-label='Fields' }

______
### blueprint
{: aria-label='Fields' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) .blueprint
{: aria-label='Fields' }

______
### boardingGoal
{: aria-label='Fields' }
#### BoardingGoal .boardingGoal
{: aria-label='Fields' }

______
### clone_ready
{: aria-label='Fields' }
#### boolean .clone_ready
{: aria-label='Fields' }

______
### crewAnim
{: aria-label='Fields' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) .crewAnim
{: aria-label='Fields' }

______
### crewTarget
{: aria-label='Fields' }
#### [StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) .crewTarget
{: aria-label='Fields' }

______
### currentRepair
{: aria-label='Fields' }
#### [Repairable](../Hyperspace/Repairable) .currentRepair
{: aria-label='Fields' }

______
### currentShipId
{: aria-label='Fields' }
#### integer .currentShipId
{: aria-label='Fields' }

______
### currentSlot
{: aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .currentSlot
{: aria-label='Fields' }

______
### currentSystem
{: aria-label='Fields' }
#### [ShipSystem](../Hyperspace/ShipSystem) .currentSystem
{: aria-label='Fields' }

______
### currentTarget
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .currentTarget
{: aria-label='Fields' }

______
### extend (Read-only)
{: aria-label='Fields' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .extend
{: aria-label='Fields' }

______
### fCloneDying
{: aria-label='Fields' }
#### number .fCloneDying
{: aria-label='Fields' }

______
### fMedbay
{: aria-label='Fields' }
#### number .fMedbay
{: aria-label='Fields' }

______
### fMindDamageBoost
{: aria-label='Fields' }
#### number .fMindDamageBoost
{: aria-label='Fields' }

______
### fStunTime
{: aria-label='Fields' }
#### number .fStunTime
{: aria-label='Fields' }

______
### finalGoal
{: aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .finalGoal
{: aria-label='Fields' }

______
### flashHealthTracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashHealthTracker
{: aria-label='Fields' }

______
### goal_x
{: aria-label='Fields' }
#### number .goal_x
{: aria-label='Fields' }

______
### goal_y
{: aria-label='Fields' }
#### number .goal_y
{: aria-label='Fields' }

______
### healing
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .healing
{: aria-label='Fields' }

______
### health
{: aria-label='Fields' }
#### pair\<number, number\> .health
{: aria-label='Fields' }

______
### healthBar
{: aria-label='Fields' }
#### CachedRect .healthBar
{: aria-label='Fields' }

______
### healthBoost
{: aria-label='Fields' }
#### integer .healthBoost
{: aria-label='Fields' }

______
### healthBox
{: aria-label='Fields' }
#### CachedImage .healthBox
{: aria-label='Fields' }

______
### healthBoxRed
{: aria-label='Fields' }
#### CachedImage .healthBoxRed
{: aria-label='Fields' }

______
### height
{: aria-label='Fields' }
#### integer .height
{: aria-label='Fields' }

______
### iDeathNumber
{: aria-label='Fields' }
#### integer .iDeathNumber
{: aria-label='Fields' }

______
### iManningId
{: aria-label='Fields' }
#### integer .iManningId
{: aria-label='Fields' }

______
### iOnFire
{: aria-label='Fields' }
#### integer .iOnFire
{: aria-label='Fields' }

______
### iRepairId
{: aria-label='Fields' }
#### integer .iRepairId
{: aria-label='Fields' }

______
### iRoomId
{: aria-label='Fields' }
#### integer .iRoomId
{: aria-label='Fields' }

______
### iShipId
{: aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }

______
### iStackId
{: aria-label='Fields' }
#### integer .iStackId
{: aria-label='Fields' }

______
### intruder
{: aria-label='Fields' }
#### boolean .intruder
{: aria-label='Fields' }

______
### lastDamageTimer
{: aria-label='Fields' }
#### number .lastDamageTimer
{: aria-label='Fields' }

______
### lastHealthChange
{: aria-label='Fields' }
#### number .lastHealthChange
{: aria-label='Fields' }

______
### lastLevelUp
{: aria-label='Fields' }
#### integer .lastLevelUp
{: aria-label='Fields' }

______
### last_door
{: aria-label='Fields' }
#### [Door](../Hyperspace/Door) .last_door
{: aria-label='Fields' }

______
### levelUp
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .levelUp
{: aria-label='Fields' }

______
### mindControlled
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .mindControlled
{: aria-label='Fields' }

______
### moveGoal
{: aria-label='Fields' }
#### integer .moveGoal
{: aria-label='Fields' }

______
### movementTarget
{: aria-label='Fields' }
#### CachedImage .movementTarget
{: aria-label='Fields' }

______
### new_path
{: aria-label='Fields' }
#### boolean .new_path
{: aria-label='Fields' }

______
### path
{: aria-label='Fields' }
#### Path .path
{: aria-label='Fields' }

______
### savedPosition
{: aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .savedPosition
{: aria-label='Fields' }

______
### scale
{: aria-label='Fields' }
#### number .scale
{: aria-label='Fields' }

______
### selectionImage
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .selectionImage
{: aria-label='Fields' }

______
### selectionState
{: aria-label='Fields' }
#### integer .selectionState
{: aria-label='Fields' }

______
### ship
{: aria-label='Fields' }
#### [Ship](../Hyperspace/Ship) .ship
{: aria-label='Fields' }

______
### size
{: aria-label='Fields' }
#### number .size
{: aria-label='Fields' }

______
### skillUp
{: aria-label='Fields' }
#### vector\<vector\<[AnimationTracker](../Hyperspace/AnimationTracker)\>\> .skillUp
{: aria-label='Fields' }

______
### skillsEarned
{: aria-label='Fields' }
#### vector\<vector\<boolean\>\> .skillsEarned
{: aria-label='Fields' }

______
### species
{: aria-label='Fields' }
#### string .species
{: aria-label='Fields' }

______
### speed_x
{: aria-label='Fields' }
#### number .speed_x
{: aria-label='Fields' }

______
### speed_y
{: aria-label='Fields' }
#### number .speed_y
{: aria-label='Fields' }

______
### stats
{: aria-label='Fields' }
#### [SCrewStats](../Hyperspace/SCrewStats) .stats
{: aria-label='Fields' }

______
### stunIcon
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .stunIcon
{: aria-label='Fields' }

______
### stunned
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .stunned
{: aria-label='Fields' }

______
### task
{: aria-label='Fields' }
#### CrewTask .task
{: aria-label='Fields' }

______
### type
{: aria-label='Fields' }
#### string .type
{: aria-label='Fields' }

______
### usingSkill
{: aria-label='Fields' }
#### integer .usingSkill
{: aria-label='Fields' }

______
### width
{: aria-label='Fields' }
#### integer .width
{: aria-label='Fields' }

______
### x (Read-only)
{: aria-label='Fields' }
#### number .x
{: aria-label='Fields' }
**read-only**

______
### x_destination
{: aria-label='Fields' }
#### number .x_destination
{: aria-label='Fields' }

______
### y (Read-only)
{: aria-label='Fields' }
#### number .y
{: aria-label='Fields' }
**read-only**

______
### y_destination
{: aria-label='Fields' }
#### number .y_destination
{: aria-label='Fields' }

___
