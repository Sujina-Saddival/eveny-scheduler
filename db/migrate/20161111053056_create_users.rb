class CreateUsers < ActiveRecord::Migration
  def change
    create_table :users do |t|
      t.string :firstname
      t.string :lastname
      t.string :username
      t.string :email
      t.string :phone
      t.string :password_hash
      t.string :password_salt
      t.string :age

      t.timestamps null: false
    end
  end
end
